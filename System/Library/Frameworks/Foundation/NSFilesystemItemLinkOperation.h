//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation
{
}

+ (id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;	// IMP=0x0080000000424042
+ (_Bool)_needsStatInfo;	// IMP=0x008000000042403a
+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;	// IMP=0x008000000042401b
- (void)_handleFTSEntry:(struct _ftsent *)arg1;	// IMP=0x00000000004242f1
- (_Bool)_validatePaths:(id *)arg1;	// IMP=0x000000000042429b
- (_Bool)_shouldLinkItemAtPath:(const char *)arg1 toPath:(const char *)arg2;	// IMP=0x00000000004241df
- (_Bool)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x00000000004241b9
- (_Bool)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;	// IMP=0x00000000004240a9
- (_Bool)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3;	// IMP=0x0000000000424080

@end

