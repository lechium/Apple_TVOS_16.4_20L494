//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;	// IMP=0x0050000000024a36
+ (id)da_newGUID;	// IMP=0x00500000000249df
- (id)stringByURLQuoting;	// IMP=0x001000000001521a
- (id)da_trimWhiteSpace;	// IMP=0x0010000000024997
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x001000000002496f
- (id)da_stringByURLEscapingPathComponent;	// IMP=0x00100000000248fd
- (id)da_appendSlashIfNeeded;	// IMP=0x00100000000248a4
- (id)da_removeSlashIfNeeded;	// IMP=0x001000000002483e
- (id)da_stringByRemovingPercentEscapesForUsername;	// IMP=0x001000000002480a
- (id)da_stringByAddingPercentEscapesForUsername;	// IMP=0x00100000000247c9
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000026e95
@end
