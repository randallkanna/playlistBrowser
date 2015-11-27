//
//  Playlist.h
//  playlistBrowser
//
//  Created by Randall Kanna on 11/25/15.
//  Copyright (c) 2015 Randall Kanna. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;

// exposes the method to any other class that uses the playlist class
- (instancetype)initWithIndex:(NSUInteger)index;

@end
