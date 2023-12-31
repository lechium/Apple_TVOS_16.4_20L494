//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPLibraryKeepLocalStatusObserver, MusicKit_SoftLinking_MPModelObject;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver : NSObject
{
    MPLibraryKeepLocalStatusObserver *_underlyingLibraryKeepLocalStatusObserver;	// 8 = 0x8
    MusicKit_SoftLinking_MPModelObject *_identifyingModelObject;	// 16 = 0x10
    CDUnknownBlockType _statusBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000007c5a
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
- (void)_handleUpdatedUnderlyingActiveKeepLocalStatus:(struct MPLibraryActiveKeepLocalStatus)arg1;	// IMP=0x0000000000007bcc
- (struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus)_activeKeepLocalStatusFromUnderlyingStatus:(struct MPLibraryActiveKeepLocalStatus)arg1 underlyingDownloadPauseReasons:(unsigned long long)arg2;	// IMP=0x0000000000007ba5
- (void)calculateDownloadProgressWithChildren:(id)arg1;	// IMP=0x0000000000007928
@property(readonly, nonatomic) struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus currentStatus;
- (id)initWithIdentifyingModelObject:(id)arg1;	// IMP=0x0000000000007430

@end

