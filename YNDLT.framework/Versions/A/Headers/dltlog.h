//
//  dltlog.h
//  iOSLib
//
//  Created by chen neng on 12-10-8.
//  Copyright (c) 2012年 ydtf. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol dltlogDelegate
- (void)logFinished:(NSString *) result;
- (void)logError:(NSError *) error;
@end

@interface dltlog : NSObject{
    NSMutableData *receivedData;
    NSURLConnection  *connection;
    NSString* strResult;
}
@property (retain,nonatomic)NSString* interface_url;
@property (nonatomic,assign)id <dltlogDelegate> delegate;

-(void)loginMessage:(NSString*)msg plat:(NSString*) plat_id system:(NSString*)sysid;
-(void)logoutMessage:(NSString*)msg plat:(NSString*) plat_id system:(NSString*)sysid;
@end
