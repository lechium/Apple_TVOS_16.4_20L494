//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSFastEnumeration-Protocol.h>
#import <TextInputTestingKit/NSObject-Protocol.h>

@class NSDictionary, NSString, TTKTestCase;

@protocol TTKTestCaseSource <NSObject, NSFastEnumeration>
@property(copy, nonatomic) CDUnknownBlockType onNewLayoutsFound;
@property(readonly, copy, nonatomic) NSDictionary *layouts;
@property(readonly, copy, nonatomic) NSString *inputMode;
@property(readonly, nonatomic) int minorVersion;
@property(readonly, nonatomic) int majorVersion;
@property(readonly, nonatomic) float fileVersion;
- (void)reset;
- (TTKTestCase *)getNextTestCase;
@end

