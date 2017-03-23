//
//  AlipayModule.h
//  AlipayModule
//
//  Created by Johnny iDay on 16/5/10.
//  Copyright © 2016年 Johnny iDay. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

@interface AlipayModule : NSObject<RCTBridgeModule>

+(void) handleCallback:(NSURL *)url;

@end
