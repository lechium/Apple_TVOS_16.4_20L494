//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRDSleepAssertion : NSObject
{
    unsigned int _assertionID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000d0388
- (void)invalidate;	// IMP=0x00100000000d02bb
- (id)initWithName:(id)arg1 timeout:(double)arg2;	// IMP=0x00100000000d00c1

@end

