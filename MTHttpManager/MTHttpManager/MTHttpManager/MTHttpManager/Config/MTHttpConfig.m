//
//  MTHttpConfig.m
//  MTHttpManager
//
//  Created by CHC on 2019/11/19.
//  Copyright © 2019 hupo. All rights reserved.
//

#import "MTHttpConfig.h"

#if __has_include(<AFNetworking/AFSecurityPolicy.h>)
#import <AFNetworking/AFSecurityPolicy.h>
#else
#import <AFNetworking/AFSecurityPolicy.h>
#endif

@implementation MTHttpConfig


static MTHttpConfig *httpConfig = nil;

+ (MTHttpConfig *)sharedConfig {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        httpConfig = [[self alloc] init];
    });
    return httpConfig;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _baseUrl = @"";
        _debugMode = YES;
        _securityPolicy = [AFSecurityPolicy defaultPolicy];
        _sessionConfiguration = [NSURLSessionConfiguration defaultSessionConfiguration];
    }
    return self;
}

@end
