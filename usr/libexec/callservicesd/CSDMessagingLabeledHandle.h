//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, NSString, TULabeledHandle;

@interface CSDMessagingLabeledHandle : PBCodable
{
    CSDMessagingHandle *_handle;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

+ (id)handleWithTULabeledHandle:(id)arg1;	// IMP=0x001000000006819c
- (void).cxx_destruct;	// IMP=0x001000000014ba6d
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014b9a6
- (unsigned long long)hash;	// IMP=0x001000000014b959
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014b891
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014b7f3
- (void)copyTo:(id)arg1;	// IMP=0x001000000014b790
- (void)writeTo:(id)arg1;	// IMP=0x001000000014b733
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000014b726
- (id)dictionaryRepresentation;	// IMP=0x001000000014b488
- (id)description;	// IMP=0x001000000014b3d9
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TULabeledHandle *tuLabeledHandle;

@end

