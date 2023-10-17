//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (DCFiltering)
- (id)objectsNotMatchingClass:(Class)arg1;	// IMP=0x002000000003a91f
- (id)objectsMatchingClass:(Class)arg1;	// IMP=0x002000000003a90d
- (id)objectMatchingKey:(id)arg1 intValue:(int)arg2;	// IMP=0x002000000003a8f3
- (id)objectMatchingKey:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x002000000003a8d9
- (id)objectMatchingKey:(id)arg1 value:(id)arg2;	// IMP=0x002000000003a8be
- (id)filteredArrayForKey:(id)arg1 intValue:(int)arg2;	// IMP=0x002000000003a8a4
- (id)filteredArrayForKey:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x002000000003a88a
- (id)filteredArrayForKey:(id)arg1 value:(id)arg2;	// IMP=0x002000000003a86f
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000000e9d08
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000e9cf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

