//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPUserRetrieveRequest : PBRequest
{
}

+ (id)options;	// IMP=0x001000000026d6d4
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000026d9b6
- (unsigned long long)hash;	// IMP=0x000000000026d9ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026d969
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026d930
- (void)copyTo:(id)arg1;	// IMP=0x000000000026d92a
- (Class)responseClass;	// IMP=0x000000000026d919
- (unsigned int)requestTypeCode;	// IMP=0x000000000026d90e
- (void)writeTo:(id)arg1;	// IMP=0x000000000026d908
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026d8fb
- (id)dictionaryRepresentation;	// IMP=0x000000000026d7d3
- (id)description;	// IMP=0x000000000026d724

@end
