//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, TVHKDMAPEntityKind;

__attribute__((visibility("hidden")))
@interface TVHKDMAPEntity : NSObject
{
    unsigned long long _protocol;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    TVHKDMAPEntityKind *_kind;	// 24 = 0x18
    NSData *_taggedData;	// 32 = 0x20
    NSMutableDictionary *_mutableAttributeValues;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0010000000027a84
- (void).cxx_destruct;	// IMP=0x0000000000028dbb
@property(retain, nonatomic) NSMutableDictionary *mutableAttributeValues; // @synthesize mutableAttributeValues=_mutableAttributeValues;
@property(retain, nonatomic) NSData *taggedData; // @synthesize taggedData=_taggedData;
@property(retain, nonatomic) TVHKDMAPEntityKind *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
- (id)_attributeValueForTagCode:(unsigned int)arg1 tagPayload:(id)arg2 attribute:(id)arg3;	// IMP=0x00000000000288ca
- (void)_setAttributeWithTagCode:(unsigned int)arg1 tagPayload:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000028700
- (void)_populateAttributes:(id)arg1 withTaggedData:(id)arg2;	// IMP=0x00000000000285fe
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027f31
@property(readonly) unsigned long long hash;
- (void)prepopulateAttributeValues;	// IMP=0x0000000000027df7
- (void)setAttributeValue:(id)arg1 forCode:(id)arg2;	// IMP=0x0000000000027d13
- (id)attributeValueForCode:(id)arg1;	// IMP=0x0000000000027c5e
@property(readonly, copy, nonatomic) NSDictionary *attributeValues;
- (id)initWithType:(unsigned long long)arg1 protocol:(unsigned long long)arg2 taggedData:(id)arg3;	// IMP=0x0000000000027b37
- (id)initWithType:(unsigned long long)arg1 protocol:(unsigned long long)arg2;	// IMP=0x0000000000027b22
- (id)init;	// IMP=0x0000000000027ab3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
