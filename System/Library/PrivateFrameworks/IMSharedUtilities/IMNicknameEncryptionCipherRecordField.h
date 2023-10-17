//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMNicknameEncryptionFieldTag, NSData, NSString;

@interface IMNicknameEncryptionCipherRecordField : NSObject
{
    NSString *_fieldName;	// 8 = 0x8
    NSData *_cipherData;	// 16 = 0x10
    NSData *_IV;	// 24 = 0x18
    IMNicknameEncryptionFieldTag *_tag;	// 32 = 0x20
}

+ (id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000010a08
- (void).cxx_destruct;	// IMP=0x0000000000010fc3
@property(retain, nonatomic) IMNicknameEncryptionFieldTag *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSData *IV; // @synthesize IV=_IV;
@property(retain, nonatomic) NSData *cipherData; // @synthesize cipherData=_cipherData;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)description;	// IMP=0x0000000000010e53
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x0000000000010d1d
- (id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4;	// IMP=0x0000000000010c3b

@end

