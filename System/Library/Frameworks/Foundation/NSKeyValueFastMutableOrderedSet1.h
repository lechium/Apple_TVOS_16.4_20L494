//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1
{
    NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 32 = 0x20
}

- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000005b5925
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005b5871
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000005b5843
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005b57b1
- (unsigned long long)count;	// IMP=0x00000000005b5783
- (void)_proxyNonGCFinalize;	// IMP=0x00000000005b5712
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000005b5685

@end

