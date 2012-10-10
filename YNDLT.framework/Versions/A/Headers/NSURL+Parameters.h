//
//  NSURL+Parameters.h
//  DesEncryptTest
//
//  Created by kmyhy on 12-9-28.
//  Copyright (c) 2012年 ydtf. All rights reserved.
//



@interface NSURL (Parameters)
- (NSDictionary *)parameters;
-(NSString*)getParameterByName:(NSString*)parameterName;
@end

