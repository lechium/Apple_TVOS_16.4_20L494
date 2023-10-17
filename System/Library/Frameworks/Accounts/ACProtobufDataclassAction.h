//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufDataclassAction : PBCodable
{
    NSMutableArray *_affectedContainers;	// 8 = 0x8
    int _type;	// 16 = 0x10
    NSString *_undoAlertMessage;	// 24 = 0x18
    NSString *_undoAlertTitle;	// 32 = 0x20
    _Bool _destructive;	// 40 = 0x28
}

+ (Class)affectedContainersType;	// IMP=0x0010000000041ea1
- (void).cxx_destruct;	// IMP=0x0000000000042d4c
@property(retain, nonatomic) NSString *undoAlertMessage; // @synthesize undoAlertMessage=_undoAlertMessage;
@property(retain, nonatomic) NSString *undoAlertTitle; // @synthesize undoAlertTitle=_undoAlertTitle;
@property(retain, nonatomic) NSMutableArray *affectedContainers; // @synthesize affectedContainers=_affectedContainers;
@property(nonatomic) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000042ae7
- (unsigned long long)hash;	// IMP=0x0000000000042a4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004291f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000426cb
- (void)copyTo:(id)arg1;	// IMP=0x00000000000425af
- (void)writeTo:(id)arg1;	// IMP=0x0000000000042401
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000423f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000041f8b
- (id)description;	// IMP=0x0000000000041edc
@property(readonly, nonatomic) _Bool hasUndoAlertMessage;
@property(readonly, nonatomic) _Bool hasUndoAlertTitle;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000041e84
- (unsigned long long)affectedContainersCount;	// IMP=0x0000000000041e67
- (void)addAffectedContainers:(id)arg1;	// IMP=0x0000000000041dfd
- (void)clearAffectedContainers;	// IMP=0x0000000000041de0

@end

