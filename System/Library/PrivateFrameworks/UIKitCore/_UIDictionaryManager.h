//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;	// 8 = 0x8
}

+ (id)assetManager;	// IMP=0x006000000044ecad
- (void).cxx_destruct;	// IMP=0x000000000044ffe5
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (_Bool)_isTTYEnabled;	// IMP=0x000000000044ffc9
- (id)_allAvailableDefinitionDictionaries;	// IMP=0x000000000044f411
- (id)_availableDictionaryAssets;	// IMP=0x000000000044f335
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;	// IMP=0x000000000044f1e8
- (id)_dictionaryAssetType;	// IMP=0x000000000044f0af
- (id)_definitionValuesForTerm:(id)arg1;	// IMP=0x000000000044ee44
- (_Bool)_hasDefinitionForTerm:(id)arg1;	// IMP=0x000000000044ecc7
- (id)init;	// IMP=0x000000000044ec4b

@end
