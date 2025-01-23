class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        rows, cols = len(board), len(board[0])

        def count_live_neighbors(r, c):
            """Count the number of live neighbors for cell (r, c)."""
            directions = [(-1, -1), (-1, 0), (-1, 1), 
                          (0, -1),         (0, 1), 
                          (1, -1), (1, 0), (1, 1)]
            count = 0
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                if 0 <= nr < rows and 0 <= nc < cols and abs(board[nr][nc]) == 1:
                    count += 1
            return count

        # First pass: apply rules and encode transitional states
        for r in range(rows):
            for c in range(cols):
                live_neighbors = count_live_neighbors(r, c)
                if board[r][c] == 1:  # Live cell
                    if live_neighbors < 2 or live_neighbors > 3:
                        board[r][c] = -1  # Live to dead
                elif board[r][c] == 0:  # Dead cell
                    if live_neighbors == 3:
                        board[r][c] = 2  # Dead to live

        # Second pass: decode transitional states to finalize the next state
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 2:
                    board[r][c] = 1 # Live to dead
                elif board[r][c] == -1:
                    board[r][c] = 0 # Dead to live
