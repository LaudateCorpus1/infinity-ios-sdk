//
//  WTOptimizeTest.h
//  Webtrends-SDK
//
//  Created by Sam Ingle on 7/17/15.
//  Copyright (c) 2015 Webtrends. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WTOptimizeFactor;
@class WTOptimizeProject;

@interface WTOptimizeTest : NSObject

@property (strong, nonatomic) NSArray *factors;
@property (strong, nonatomic) NSArray *conversions;
@property (strong, nonatomic) NSString *guid;
@property (nonatomic, strong) NSString *projectLocation;
@property (nonatomic) NSInteger projectId;
@property (nonatomic) NSInteger experimentId;
@property (nonatomic) NSInteger testId;
@property (strong, nonatomic) NSString *testAlias;
@property (nonatomic, strong) NSString *projectTypeId;
@property (strong, nonatomic) NSString *personalizedId;
@property (nonatomic) NSTimeInterval expiration;
@property (nonatomic) NSString *cacheStatus;

- (WTOptimizeFactor *) factorForIdentifier:(NSString *)identifier;
+(void) cleanExpiredTests;

/**
 *  Returns true if the test is expired (as defined in the Optimize test).
 */
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

/**
 *  Returns true if all factors associated with this test are ready for use.
 */
@property(readonly, nonatomic, getter=isReady) BOOL ready;

@end
