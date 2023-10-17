//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, NSData, NSDictionary;

@interface GTTransportMessage_replayer : NSObject
{
    NSData *_payload;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
    GTTransport_replayer *_transport;	// 24 = 0x18
    NSData *_encodedAttributes;	// 32 = 0x20
    id _decodedPayload;	// 40 = 0x28
    unsigned int _decodedPayloadType;	// 48 = 0x30
    int _kind;	// 52 = 0x34
    unsigned int _serial;	// 56 = 0x38
    unsigned int _replySerial;	// 60 = 0x3c
    unsigned int _transportSize;	// 64 = 0x40
}

+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x00200000000198da
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;	// IMP=0x00100000000198a6
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0010000000019865
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;	// IMP=0x0010000000019831
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x00100000000197f0
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;	// IMP=0x00100000000197bc
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x001000000001977b
+ (id)messageWithKind:(int)arg1 boolPayload:(_Bool)arg2;	// IMP=0x0010000000019747
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000019706
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;	// IMP=0x00100000000196d2
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;	// IMP=0x001000000001969d
+ (id)messageWithKind:(int)arg1;	// IMP=0x001000000001966b
@property(readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;
@property(readonly, retain, nonatomic) GTTransport_replayer *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property(readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
- (id)objectPayload;	// IMP=0x00100000000193b3
- (id)stringPayload;	// IMP=0x001000000001935d
- (id)plistPayload;	// IMP=0x001000000001920a
- (_Bool)boolPayload;	// IMP=0x001000000001914a
- (_Bool)boolForKey:(id)arg1;	// IMP=0x001000000001910c
- (double)doubleForKey:(id)arg1;	// IMP=0x00100000000190ce
- (unsigned long long)uint64ForKey:(id)arg1;	// IMP=0x0010000000019090
- (unsigned int)uint32ForKey:(id)arg1;	// IMP=0x0010000000019052
- (id)attributeForKey:(id)arg1;	// IMP=0x0010000000019021
- (void)_setTransportSize:(unsigned int)arg1;	// IMP=0x0010000000019018
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;	// IMP=0x0010000000018ff5
- (_Bool)hasBeenSent;	// IMP=0x0010000000018fdc
- (id)description;	// IMP=0x0010000000018f76
- (void)dealloc;	// IMP=0x0010000000018f17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000018ec7
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x0010000000018df0
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0010000000018d7b
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x0010000000018d03
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x0010000000018c75
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000018bfd
- (id)init;	// IMP=0x0010000000018bd2

@end

