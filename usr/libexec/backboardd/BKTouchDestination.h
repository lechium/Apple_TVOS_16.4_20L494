//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKDigitizerTouchStreamClient, NSHashTable;

@interface BKTouchDestination
{
    NSHashTable *_externalReferences;	// 8 = 0x8
    unsigned long long _predicate;	// 16 = 0x10
    BKDigitizerTouchStreamClient *_touchStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006d79b
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000006d704
- (void)appendSuccinctDescriptionToFormatter:(id)arg1;	// IMP=0x001000000006d5ba
- (id)description;	// IMP=0x001000000006d59e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d524

@end

