//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (IconFoundationAdditions)
- (_Bool)_IF_isDirectory;	// IMP=0x006000000001371b
- (_Bool)_IF_conformsToUTI:(id)arg1;	// IMP=0x00600000000136a1
- (id)_IF_typeIdentifier;	// IMP=0x0060000000013610
- (_Bool)_IF_isAliasFile;	// IMP=0x006000000001355f
- (_Bool)_IF_isSymLink;	// IMP=0x00600000000134ca
- (_Bool)_IF_isOnBootVolume;	// IMP=0x0060000000013486
- (_Bool)_IF_isBootVolume;	// IMP=0x00600000000133f1
- (id)_IF_volumeURL;	// IMP=0x0060000000013374
- (_Bool)_IF_isVolume;	// IMP=0x00600000000132df
- (long long)_IF_fileSize;	// IMP=0x006000000001324a
- (id)_IF_modifiedDate;	// IMP=0x00600000000131c6
- (id)_IF_attributeModifiedDate;	// IMP=0x00600000000130f5
- (_Bool)_IF_getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;	// IMP=0x0060000000013081
- (id)_IF_contentModifiedDate;	// IMP=0x0060000000012fb0
- (_Bool)_IF_setExtendedAttribute:(id)arg1 forName:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000012ca4
- (id)_IF_extendedAttributeForName:(id)arg1;	// IMP=0x0060000000012b53
@end
