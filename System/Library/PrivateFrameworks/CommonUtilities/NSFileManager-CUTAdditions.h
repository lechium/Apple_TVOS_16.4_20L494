//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CUTAdditions)
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;	// IMP=0x0060000000006b43
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x00600000000069cd
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x00600000000066b3
- (_Bool)_cutIsPathOnMissingVolume:(id)arg1;	// IMP=0x006000000000658c
@end
