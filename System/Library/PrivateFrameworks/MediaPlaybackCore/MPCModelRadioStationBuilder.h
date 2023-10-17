//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPropertySet;

__attribute__((visibility("hidden")))
@interface MPCModelRadioStationBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int beats1:1;
        unsigned int name:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int explicit;
        unsigned int artwork:1;
        unsigned int allowsItemLiking:1;
        unsigned int attributionLabel:1;
        unsigned int type:1;
        unsigned int subtype:1;
        unsigned int subscriptionRequired:1;
        unsigned int providerUniversalLink:1;
        unsigned int providerBundleIdentifier:1;
    } _requestedRadioStationProperties;	// 8 = 0x8
    MPPropertySet *_requestedProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002051c5
@property(readonly, copy, nonatomic) MPPropertySet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
- (id)modelRadioStationForMetadata:(id)arg1 userIdentity:(id)arg2;	// IMP=0x0000000000204d33
- (id)initWithRequestedProperties:(id)arg1;	// IMP=0x0000000000204cc0

@end

