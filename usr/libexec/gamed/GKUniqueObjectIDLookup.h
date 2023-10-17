//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKThreadsafeDictionary, NSPredicate;
@protocol OS_dispatch_semaphore;

@interface GKUniqueObjectIDLookup : NSObject
{
    Class _objectClass;	// 8 = 0x8
    GKThreadsafeDictionary *_lookup;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 32 = 0x20
    int _valid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000145a80
- (id)insertObjectsForServerRepresentations:(id)arg1 context:(id)arg2 newObject:(CDUnknownBlockType)arg3;	// IMP=0x00100000001455f2
- (id)uniqueObjectsForKeys:(id)arg1 context:(id)arg2 newObject:(CDUnknownBlockType)arg3;	// IMP=0x0010000000144833
- (void)_populateWithContext:(id)arg1;	// IMP=0x0010000000143a36
- (void)dealloc;	// IMP=0x00100000001439c1
- (id)initWithObjectClass:(Class)arg1 context:(id)arg2 predicate:(id)arg3;	// IMP=0x0010000000143737
- (id)initWithObjectClass:(Class)arg1 context:(id)arg2;	// IMP=0x00100000001436ac

@end

