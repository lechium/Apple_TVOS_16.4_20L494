//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionRetrieveRequest : PBRequest
{
    CKDPIdentifier *_identifier;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000001de0a2
- (void).cxx_destruct;	// IMP=0x00000000001de621
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001de59f
- (unsigned long long)hash;	// IMP=0x00000000001de582
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001de4e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001de470
- (void)copyTo:(id)arg1;	// IMP=0x00000000001de446
- (Class)responseClass;	// IMP=0x00000000001de435
- (unsigned int)requestTypeCode;	// IMP=0x00000000001de42a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001de406
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001de3f9
- (id)dictionaryRepresentation;	// IMP=0x00000000001de1b6
- (id)description;	// IMP=0x00000000001de107
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

