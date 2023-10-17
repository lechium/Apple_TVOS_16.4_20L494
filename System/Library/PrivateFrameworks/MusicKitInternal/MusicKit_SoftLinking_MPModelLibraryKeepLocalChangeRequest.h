//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryKeepLocalChangeRequest, MusicKit_SoftLinking_MPModelObject, NSArray;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryKeepLocalChangeRequest : NSObject
{
    MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;	// 8 = 0x8
    MusicKit_SoftLinking_MPModelObject *_modelObject;	// 16 = 0x10
    long long _enableState;	// 24 = 0x18
    NSArray *_relatedModelObjects;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004c49
@property(copy, nonatomic) NSArray *relatedModelObjects; // @synthesize relatedModelObjects=_relatedModelObjects;
@property(nonatomic) long long enableState; // @synthesize enableState=_enableState;
@property(retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property(readonly, nonatomic) MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
- (id)init;	// IMP=0x0000000000004a76

@end

