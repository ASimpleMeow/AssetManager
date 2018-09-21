#include "TileMap.hpp"

void TileMap::add(Tile tile) {
	m_map.emplace_back(tile);
}

void TileMap::remove(const sf::Vector2f &tilePos) {
	m_map.remove_if([&tilePos](const Tile& value) {
		return value.getPosition() == tilePos;
	});
}

void TileMap::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	for (auto &tile : m_map)
		target.draw(tile);
}
