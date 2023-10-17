//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSValidationErrorLocalizationPolicy : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSBundle *_localizationBundle;	// 16 = 0x10
    NSString *_modelStringsFileName;	// 24 = 0x18
    NSDictionary *_localizationDictionary;	// 32 = 0x20
    _Bool _hasSetLocalizationDictionary;	// 40 = 0x28
}

- (id)localizedModelStringForKey:(id)arg1;	// IMP=0x0000000000202e93
- (id)localizedPropertyNameForProperty:(id)arg1;	// IMP=0x0000000000202e0b
- (id)localizedEntityNameForEntity:(id)arg1;	// IMP=0x0000000000202cc2
- (void)setLocalizationDictionary:(id)arg1;	// IMP=0x0000000000202c7d
- (id)localizationDictionary;	// IMP=0x0000000000202c5f
- (id)_cachedObjectForKey:(id)arg1 value:(void *)arg2;	// IMP=0x0000000000202bca
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// IMP=0x0000000000202a29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002029a2
- (void)dealloc;	// IMP=0x000000000020294a
- (id)initWithURL:(id)arg1;	// IMP=0x00000000002028eb

@end

