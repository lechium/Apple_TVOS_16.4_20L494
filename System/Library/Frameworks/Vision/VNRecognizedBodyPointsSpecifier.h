//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNRecognizedBodyPointsSpecifier
{
    NSArray *_orderedPersonKeypoints;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000d6cc
- (void).cxx_destruct;	// IMP=0x000000000000d369
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d1fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d180
- (id)populatedMLMultiArrayAndReturnError:(id *)arg1;	// IMP=0x000000000000cbc4
- (id)pointKeyGroupLabelsMapping;	// IMP=0x000000000000cb94
- (id)availableGroupKeys;	// IMP=0x000000000000cb64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000cac7
- (unsigned long long)hash;	// IMP=0x000000000000ca6d
- (id)initWithVCPPersonObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;	// IMP=0x000000000000c4e0

@end

