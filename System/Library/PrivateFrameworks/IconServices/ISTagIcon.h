//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ISTagIcon
{
    NSString *_tag;	// 16 = 0x10
    NSString *_tagClass;	// 24 = 0x18
    NSString *_baseType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002e2b8
- (void).cxx_destruct;	// IMP=0x000000000002ebda
@property(readonly) NSString *baseType; // @synthesize baseType=_baseType;
@property(readonly) NSString *tagClass; // @synthesize tagClass=_tagClass;
@property(readonly) NSString *tag; // @synthesize tag=_tag;
- (id)_fallbackKey;	// IMP=0x000000000002eb11
- (id)description;	// IMP=0x000000000002ea6a
- (id)makeResourceProvider;	// IMP=0x000000000002e6f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e639
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e511
- (id)initWithModelCode:(id)arg1;	// IMP=0x000000000002e4f2
- (id)initWithMIMEType:(id)arg1;	// IMP=0x000000000002e4d3
- (id)initWithTypeCode:(unsigned int)arg1;	// IMP=0x000000000002e4c5
- (id)initWithFileExtension:(id)arg1 baseType:(id)arg2;	// IMP=0x000000000002e4a6
- (id)initWithFileExtension:(id)arg1;	// IMP=0x000000000002e480
- (id)initWithTag:(id)arg1 tagClass:(id)arg2 baseType:(id)arg3;	// IMP=0x000000000002e2c0

@end

