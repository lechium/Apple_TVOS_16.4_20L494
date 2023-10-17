//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSArray, NSString;

@interface NSSet (HMFMerging)
+ (id)shortDescription;	// IMP=0x00100000000485c9
- (id)hmf_commonObjectsFromSet:(id)arg1;	// IMP=0x0010000000015e9f
- (id)hmf_removedObjectsFromSet:(id)arg1;	// IMP=0x0010000000015e1f
- (id)hmf_addedObjectsFromSet:(id)arg1;	// IMP=0x0010000000015dc0
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

