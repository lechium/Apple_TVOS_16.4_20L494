//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueNonmutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection1Getter
{
    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;	// 88 = 0x58
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;	// 96 = 0x60
}

- (id)mutatingMethods;	// IMP=0x000000000044c4a5
- (id)nonmutatingMethods;	// IMP=0x000000000044c494
- (void)dealloc;	// IMP=0x000000000044c419
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;	// IMP=0x000000000044c37b

@end

