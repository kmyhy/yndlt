//
//  CheckVersionURL.h
//  iOSLib
//
//  Created by chen neng on 12-10-9.
//  Copyright (c) 2012年 ydtf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VersionInfo.h"

@protocol CheckVersionURLDelegate
- (void)checkFinished:(VersionInfo *) result;
- (void)checkError:(NSError *) error;
@end

@interface CheckVersionURL : NSObject<NSXMLParserDelegate>{
    NSURLConnection  *connection;
    NSString* strResult;
    NSMutableData *receivedData;
    int flag;
    VersionInfo* info;
    NSMutableString* bufferString;
}
@property(nonatomic,retain)NSString* check_url;
@property(nonatomic,assign)id <CheckVersionURLDelegate> delegate;
-(void)start;
@end
