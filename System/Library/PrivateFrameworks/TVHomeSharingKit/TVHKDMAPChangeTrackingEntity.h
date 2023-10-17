//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TVHKDMAPEntity;

__attribute__((visibility("hidden")))
@interface TVHKDMAPChangeTrackingEntity : NSObject
{
    NSMutableDictionary *_mutatedAttributeValues;	// 8 = 0x8
    TVHKDMAPEntity *_entity;	// 16 = 0x10
}

+ (id)new;	// IMP=0x001000000008e2ea
- (void).cxx_destruct;	// IMP=0x000000000008f03c
@property(retain, nonatomic) TVHKDMAPEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSMutableDictionary *mutatedAttributeValues; // @synthesize mutatedAttributeValues=_mutatedAttributeValues;
- (id)_mutableAttributeValuesData;	// IMP=0x000000000008ef22
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008ec69
@property(readonly) unsigned long long hash;
- (void)prepopulateAttributeValues;	// IMP=0x000000000008eb5d
- (void)setAttributeValue:(id)arg1 forCode:(id)arg2;	// IMP=0x000000000008ea62
- (id)attributeValueForCode:(id)arg1;	// IMP=0x000000000008e914
@property(readonly, copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) unsigned long long protocol;
@property(readonly, nonatomic) unsigned long long type;
- (void)commitChanges;	// IMP=0x000000000008e5a3
@property(readonly, copy, nonatomic) NSDictionary *commitedAttributeValues;
@property(readonly, copy, nonatomic) NSDictionary *changedAttributeValues;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000008e388
- (id)init;	// IMP=0x000000000008e319

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

