//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface ML3DAAPImportOperation : ML3ImportOperation
{
    void *_importSession;	// 8 = 0x8
    NSError *_importError;	// 16 = 0x10
    struct shared_ptr<DAAPParserDelegate> _delegate;	// 24 = 0x18
    unsigned char _updateType;	// 40 = 0x28
    long long _totalTrackCount;	// 48 = 0x30
    long long _totalContainerCount;	// 56 = 0x38
    long long _totalAlbumCount;	// 64 = 0x40
    long long _totalArtistCount;	// 72 = 0x48
    long long _processedTrackCount;	// 80 = 0x50
    long long _processedContainerCount;	// 88 = 0x58
    _Bool _importSessionStarted;	// 96 = 0x60
    int _sourceType;	// 100 = 0x64
}

- (id).cxx_construct;	// IMP=0x000000000001f2c9
- (void).cxx_destruct;	// IMP=0x000000000001f276
- (_Bool)_processArtistElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001f26e
- (_Bool)_processArtistCount:(int)arg1;	// IMP=0x000000000001f258
- (_Bool)_processAlbumElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001f250
- (_Bool)_processAlbumCount:(int)arg1;	// IMP=0x000000000001f23a
- (_Bool)_startImportSessionIfNeeded;	// IMP=0x000000000001f124
- (_Bool)_processDeletedArtistId:(long long)arg1;	// IMP=0x000000000001f11c
- (_Bool)_processDeletedAlbumId:(long long)arg1;	// IMP=0x000000000001f114
- (_Bool)_processPersonElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001e6c8
- (_Bool)_processDeletedContainerId:(long long)arg1;	// IMP=0x000000000001e528
- (_Bool)_processContainerElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x000000000001e23c
- (_Bool)_processContainerItemCount:(int)arg1;	// IMP=0x000000000001e226
- (_Bool)_processDeletedTrackId:(long long)arg1;	// IMP=0x000000000001e086
- (_Bool)_processTrackElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001de10
- (_Bool)_processTrackItemCount:(int)arg1;	// IMP=0x000000000001ddfa
- (_Bool)_processUpdateType:(unsigned char)arg1;	// IMP=0x000000000001dde8
- (void)_finishParsingWithError:(id)arg1;	// IMP=0x000000000001dd2a
- (_Bool)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(_Bool)arg2;	// IMP=0x000000000001d9e1
- (_Bool)_importDAAPPayloadFromFile:(id)arg1 entityType:(int)arg2;	// IMP=0x000000000001d699
- (void)updateImportProgress:(float)arg1;	// IMP=0x000000000001d687
- (shared_ptr_9dbb0ac9)personImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001d54e
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x000000000001d3f5
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001d2f7
- (_Bool)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2;	// IMP=0x000000000001b281
- (void)dealloc;	// IMP=0x000000000001b23a

@end

