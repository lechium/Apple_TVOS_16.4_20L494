//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FMSongRendition.h"

@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition
{
    FlexMLSummary *_summary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017b5b
@property(retain, nonatomic) FlexMLSummary *summary; // @synthesize summary=_summary;
- (id)_buildOutroFadeoutMixParams;	// IMP=0x0000000000017b2e
- (void)_buildTracks;	// IMP=0x0000000000016dd8
- (void)_calculateDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000016c22
- (id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(CDStruct_1b6d18a9)arg4;	// IMP=0x0000000000016b68

@end

