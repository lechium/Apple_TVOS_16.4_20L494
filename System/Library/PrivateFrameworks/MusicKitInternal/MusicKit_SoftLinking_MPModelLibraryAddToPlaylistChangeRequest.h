//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryAddToPlaylistChangeRequest, MusicKit_SoftLinking_MPModelObject, NSArray;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject
{
    MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;	// 8 = 0x8
    MusicKit_SoftLinking_MPModelObject *_playlist;	// 16 = 0x10
    MusicKit_SoftLinking_MPModelObject *_modelObject;	// 24 = 0x18
    MusicKit_SoftLinking_MPModelObject *_referralObject;	// 32 = 0x20
    NSArray *_songResults;	// 40 = 0x28
    CDUnknownBlockType _storeImportAllowedHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000002d92
@property(copy, nonatomic) CDUnknownBlockType storeImportAllowedHandler; // @synthesize storeImportAllowedHandler=_storeImportAllowedHandler;
@property(copy, nonatomic) NSArray *songResults; // @synthesize songResults=_songResults;
@property(retain, nonatomic) MusicKit_SoftLinking_MPModelObject *referralObject; // @synthesize referralObject=_referralObject;
@property(retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property(retain, nonatomic) MusicKit_SoftLinking_MPModelObject *playlist; // @synthesize playlist=_playlist;
@property(readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
- (id)init;	// IMP=0x0000000000002933

@end

