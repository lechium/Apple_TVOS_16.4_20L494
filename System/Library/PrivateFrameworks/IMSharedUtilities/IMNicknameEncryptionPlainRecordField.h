//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IMNicknameEncryptionPlainRecordField : NSObject
{
    NSString *_fieldName;	// 8 = 0x8
    NSData *_plainData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000109e0
@property(retain, nonatomic) NSData *plainData; // @synthesize plainData=_plainData;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)description;	// IMP=0x00000000000108f4
- (id)initWithFieldName:(id)arg1 plainData:(id)arg2;	// IMP=0x000000000001085b

@end

