//
//  MTHttpConfig.h
//  MTHttpManager
//
//  Created by CHC on 2019/11/19.
//  Copyright © 2019 hupo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AFSecurityPolicy;

NS_ASSUME_NONNULL_BEGIN

@interface MTHttpConfig : NSObject


- (instancetype )init NS_UNAVAILABLE;

+ (instancetype )new NS_UNAVAILABLE;

+ (MTHttpConfig *)sharedConfig;

/*! Base url of requests, default is nil */
@property (nonatomic, strong) NSString *baseUrl;
/*! Security policy will be used by AFNetworking. See also `AFSecurityPolicy`.*/
@property (nonatomic, strong) AFSecurityPolicy *securityPolicy;

/*! Request timeout seconds, default is 30 (unit is second) */
@property (nonatomic, assign) NSTimeInterval timeoutSeconds;

/*! If debugMode is set to be YES, then print all detail log */
@property (nonatomic, assign) BOOL debugMode;

/*!  SessionConfiguration will be used to initialize AFHTTPSessionManager. Default is nil. */
@property (nonatomic, strong) NSURLSessionConfiguration *sessionConfiguration;



@end

NS_ASSUME_NONNULL_END
