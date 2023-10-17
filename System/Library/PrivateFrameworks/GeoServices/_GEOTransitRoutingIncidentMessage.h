//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPBTransitRoutingIncidentMessage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutingIncidentMessage : NSObject
{
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;	// 8 = 0x8
    NSArray *_transitIncidents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000118c16a
- (void).cxx_destruct;	// IMP=0x000000000118cbbf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000118c8db
@property(readonly, nonatomic) NSArray *transitIncidents;
@property(readonly, nonatomic) NSString *routingMessage;
- (id)_fakeTransitLineIncidentInLine:(id)arg1;	// IMP=0x000000000118c680
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;	// IMP=0x000000000118c540
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000118c4cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000118c398
- (id)initFakeLineIncidentMessageInLine:(id)arg1;	// IMP=0x000000000118c2b2
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;	// IMP=0x000000000118c212
- (id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2;	// IMP=0x000000000118c172

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

