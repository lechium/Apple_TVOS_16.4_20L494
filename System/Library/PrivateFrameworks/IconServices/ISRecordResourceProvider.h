//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSRecord, NSString;

__attribute__((visibility("hidden")))
@interface ISRecordResourceProvider
{
    NSString *_templateType;	// 96 = 0x60
    NSString *_fileExtension;	// 104 = 0x68
    LSRecord *_record;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000028378
@property(readonly) LSRecord *record; // @synthesize record=_record;
@property(retain) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain) NSString *templateType; // @synthesize templateType=_templateType;
- (_Bool)onlySupportsGraphicIcons;	// IMP=0x0000000000028266
- (_Bool)supportsGraphicIcons;	// IMP=0x00000000000281db
- (_Bool)_isAppleResource;	// IMP=0x0000000000028183
- (id)symbol;	// IMP=0x0000000000027fce
- (unsigned long long)iconShape;	// IMP=0x0000000000027f9f
- (id)customRecipe;	// IMP=0x0000000000027f61
- (id)templateIconResource;	// IMP=0x0000000000027f59
- (id)resourceNamed:(id)arg1;	// IMP=0x0000000000027eb2
- (id)iconResource;	// IMP=0x0000000000027e34
- (void)resolveResources;	// IMP=0x0000000000027113
- (id)initWithRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000026e4e

@end

