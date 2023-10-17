//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXSchema;

@interface CKXAtomBindingImplementation : NSObject
{
    struct {
        unsigned long long siteIdentifier;
        unsigned long long siteIdentifier_identifier;
        unsigned long long siteIdentifier_modifier;
        unsigned long long timestamp;
        unsigned long long timestamp_siteIdentifier;
        unsigned long long timestamp_clock;
        unsigned long long reference;
        unsigned long long reference_timestamp;
        unsigned long long atom;
        unsigned long long atom_version;
        unsigned long long atom_timestamp;
        unsigned long long atom_references;
        unsigned long long atom_atom_type;
        unsigned long long atom_value;
        unsigned long long topLevelContainer;
        unsigned long long topLevelContainer_atoms;
        unsigned long long timestamp_identifier;
        unsigned long long timestamp_modifier;
        unsigned long long timestamp_unordered;
        unsigned long long location;
        unsigned long long location_identifier;
        unsigned long long location_zone_name;
        unsigned long long location_zone_owner_name;
        unsigned long long reference_type;
        unsigned long long reference_location;
        unsigned long long atom_location;
        unsigned long long atom_atom_behavior;
    } tokens;	// 8 = 0x8
    CKXSchema *_schema;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000c3b55
@property(retain, nonatomic) CKXSchema *schema; // @synthesize schema=_schema;
- (id)orcHelpers;	// IMP=0x00000000000c3aa3
- (Class)mutableProxyClassForStructToken:(unsigned long long)arg1;	// IMP=0x00000000000c3995
- (Class)proxyClassForStructToken:(unsigned long long)arg1;	// IMP=0x00000000000c3887
- (unsigned long long)structTokenForClass:(Class)arg1;	// IMP=0x00000000000c369c
- (unsigned long long)topLevelStructToken;	// IMP=0x00000000000c3692
- (id)init;	// IMP=0x00000000000c3618

@end

