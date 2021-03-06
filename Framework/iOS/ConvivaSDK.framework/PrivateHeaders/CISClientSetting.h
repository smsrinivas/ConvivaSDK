//
//  ClientSetting.h
//  iOSConvivaSDK
//
//  Created by Nirvaid Rathore on 23/02/16.
//  Copyright © 2016 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "CISClientSettingProtocol.h"

@interface CISClientSetting : NSObject<CISClientSettingProtocol>

-(instancetype)init NS_UNAVAILABLE;
-(instancetype)initWithCustomerKey:(NSString *)CustomerKey error:(NSError **)error NS_DESIGNATED_INITIALIZER;
-(void)sanitize;
- (NSString *)updateGatewayURLError;

@end
