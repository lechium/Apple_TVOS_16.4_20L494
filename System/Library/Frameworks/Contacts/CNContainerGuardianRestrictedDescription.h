//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerGuardianRestrictedDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x00000000000081c9
- (id)CNValueForContainer:(id)arg1;	// IMP=0x0000000000008191
- (_Bool)isWritable;	// IMP=0x0000000000008189
- (Class)valueClass;	// IMP=0x0000000000008178
- (id)key;	// IMP=0x0000000000008164
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000003c8f6
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000003c8be
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000003c814
- (int)abPropertyID;	// IMP=0x000000000003c805

@end

