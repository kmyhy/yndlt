//
//  VersionInfo.h
//  iOSLib
//
//  Created by chen neng on 12-10-9.
//  Copyright (c) 2012年 ydtf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VersionInfo : NSObject
@property(retain,nonatomic)NSString* versionNumber;
@property(nonatomic,assign)BOOL forcedUpdate;
@property(nonatomic,retain)NSString* feature;
@property(nonatomic,retain)NSString* updateURL;
-(NSComparisonResult)compareTo:(NSString*)nextVersion;
@end
