//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPerson.h>

@class NSDate, NSPersonNameComponents, NSString;

@interface PHPerson (PhotosUICore)
+ (id)px_localizedNameFromContact:(id)arg1;	// IMP=0x00100000001e6541
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;	// IMP=0x001000000032cce5
+ (id)px_fetchPersonsForSuggestion:(id)arg1 options:(id)arg2;	// IMP=0x001000000079677c
@property(readonly, nonatomic) NSPersonNameComponents *px_nameComponents;
- (id)_px_localizedNameWithStyle:(long long)arg1;	// IMP=0x00100000001e63e9
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) _Bool isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000032c96c
@property(readonly, nonatomic) _Bool px_isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@end
