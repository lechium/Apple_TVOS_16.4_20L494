//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSAltIconManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00800000000157fd
- (_Bool)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000016118
- (_Bool)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2;	// IMP=0x000000000001605c
- (void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000001602b
- (id)_getPreferredIconNameForIdentifier:(id)arg1;	// IMP=0x0000000000015fd6
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015b2d
- (id)alternateIconNameForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015a2c
- (void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2;	// IMP=0x0000000000015881
- (id)init;	// IMP=0x0000000000015852

@end
