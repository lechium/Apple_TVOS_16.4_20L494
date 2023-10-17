//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDPRecordIdentifier, NSData, NSNumber;

@interface CKDAssetID : NSObject
{
    CKDPRecordIdentifier *_recordID;	// 8 = 0x8
    NSData *_fileSignature;	// 16 = 0x10
    NSData *_referenceSignature;	// 24 = 0x18
    NSNumber *_size;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002fd364
@property(readonly, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(readonly, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(readonly, nonatomic) CKDPRecordIdentifier *recordID; // @synthesize recordID=_recordID;
- (id)description;	// IMP=0x00000000002fd32a
- (id)CKPropertiesDescription;	// IMP=0x00000000002fd0ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fd0e3
- (unsigned long long)hash;	// IMP=0x00000000002fd07b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fceda
- (id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4;	// IMP=0x00000000002fcdf8

@end

