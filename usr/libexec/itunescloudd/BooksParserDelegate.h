//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICBook, JaliscoLoadBooksOperation, NSMutableArray, NSString;

@interface BooksParserDelegate : NSObject
{
    _Bool _shouldParseMetadata;	// 8 = 0x8
    JaliscoLoadBooksOperation *_operation;	// 16 = 0x10
    NSMutableArray *_parsedBooks;	// 24 = 0x18
    ICBook *_currentParsingBook;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c1666
@property(nonatomic) _Bool shouldParseMetadata; // @synthesize shouldParseMetadata=_shouldParseMetadata;
@property(retain, nonatomic) ICBook *currentParsingBook; // @synthesize currentParsingBook=_currentParsingBook;
@property(readonly, nonatomic) NSMutableArray *parsedBooks; // @synthesize parsedBooks=_parsedBooks;
@property(readonly, nonatomic) JaliscoLoadBooksOperation *operation; // @synthesize operation=_operation;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x00100000000c15c0
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00100000000c10d3
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00100000000c1097
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00100000000c105b
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00100000000c0f9a
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000c0f53
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00100000000c0eea
- (void)parserDidStart:(id)arg1;	// IMP=0x00100000000c0eb1
- (id)initWithOperation:(id)arg1;	// IMP=0x00100000000c0e46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

