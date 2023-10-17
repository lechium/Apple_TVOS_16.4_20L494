//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ContainerCloudIDsParserDelegate : NSObject
{
    unsigned char _currentPlaylistKind;	// 8 = 0x8
    unsigned int _currentPlaylistCloudID;	// 12 = 0xc
    NSMutableArray *_subscribedPlaylistCloudIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002c8ca
@property(readonly, nonatomic) unsigned char currentPlaylistKind; // @synthesize currentPlaylistKind=_currentPlaylistKind;
@property(readonly, nonatomic) unsigned int currentPlaylistCloudID; // @synthesize currentPlaylistCloudID=_currentPlaylistCloudID;
@property(readonly, nonatomic) NSMutableArray *subscribedPlaylistCloudIDs; // @synthesize subscribedPlaylistCloudIDs=_subscribedPlaylistCloudIDs;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x001000000002c826
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x001000000002c800
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x001000000002c7e7
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x001000000002c7c5
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x001000000002c789
- (id)init;	// IMP=0x001000000002c723

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
