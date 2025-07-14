import pygame
import random

# Initialize
pygame.init()

# Screen setup
WIDTH, HEIGHT = 600, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Simple Shooter")

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
BLACK = (0, 0, 0)

# Clock
clock = pygame.time.Clock()

# Player
player = pygame.Rect(WIDTH//2 - 25, HEIGHT - 60, 50, 50)
player_speed = 5

# Bullets
bullets = []
bullet_speed = 7

# Enemies
enemies = []
enemy_speed = 3
enemy_spawn_time = 30  # frames
frame_count = 0

# Game loop
running = True
while running:
    clock.tick(60)  # 60 FPS
    screen.fill(BLACK)

    # Events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Key controls
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player.left > 0:
        player.x -= player_speed
    if keys[pygame.K_RIGHT] and player.right < WIDTH:
        player.x += player_speed
    if keys[pygame.K_SPACE]:
        if len(bullets) < 5:  # Limit number of bullets
            bullets.append(pygame.Rect(player.centerx - 2, player.top, 4, 10))

    # Move bullets
    for bullet in bullets[:]:
        bullet.y -= bullet_speed
        if bullet.bottom < 0:
            bullets.remove(bullet)

    # Spawn enemies
    frame_count += 1
    if frame_count % enemy_spawn_time == 0:
        enemies.append(pygame.Rect(random.randint(0, WIDTH-40), 0, 40, 40))

    # Move enemies
    for enemy in enemies[:]:
        enemy.y += enemy_speed
        if enemy.top > HEIGHT:
            enemies.remove(enemy)

    # Collision
    for enemy in enemies[:]:
        for bullet in bullets[:]:
            if enemy.colliderect(bullet):
                enemies.remove(enemy)
                bullets.remove(bullet)
                break

    # Draw player
    pygame.draw.rect(screen, BLUE, player)

    # Draw bullets
    for bullet in bullets:
        pygame.draw.rect(screen, WHITE, bullet)

    # Draw enemies
    for enemy in enemies:
        pygame.draw.rect(screen, RED, enemy)

    pygame.display.flip()

pygame.quit()
