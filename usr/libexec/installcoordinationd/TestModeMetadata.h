//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TestModeMetadata : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    NSDictionary *_testSpecificValidationData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000031e37
@property(readonly, nonatomic) NSDictionary *testSpecificValidationData; // @synthesize testSpecificValidationData=_testSpecificValidationData;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)initWithMode:(unsigned long long)arg1 testSpecificValidationData:(id)arg2;	// IMP=0x0010000000031dad

@end

