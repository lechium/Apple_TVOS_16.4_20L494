//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWMBase : NSObject
{
    double _privacyTimeOffset;	// 8 = 0x8
}

- (int)getSampleCount;	// IMP=0x0020000000c1030c
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000c10306
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0010000000c102e7
- (void)setPrivacyTimeOffset:(double)arg1;	// IMP=0x0010000000c102dc
- (id)metadata;	// IMP=0x0010000000c102d4
- (void)dealloc;	// IMP=0x0010000000c102a5
- (void)setupListener;	// IMP=0x0010000000c1029f
- (void)teardownListeners;	// IMP=0x0010000000c10299
- (id)init;	// IMP=0x0010000000c1026a

@end
