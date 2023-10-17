//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVMetadataItem.h>

@class NSString;

@interface AVMetadataItem (AVAirSerialization)
+ (id)itemArrayWithAirRepresentations:(id)arg1;	// IMP=0x00100000000a5192
+ (id)airRepresentationForArray:(id)arg1;	// IMP=0x00100000000a5185
+ (id)itemWithAirDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000a43e8
- (id)airDictionaryRepresentation;	// IMP=0x00100000000a3c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
